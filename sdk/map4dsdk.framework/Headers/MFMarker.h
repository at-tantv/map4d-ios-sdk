//
//  MFMarker.h
//  mapes
//
//  Created by tantv on 9/17/18.
//

#ifndef MFMarker_h
#define MFMarker_h
#import "MFOverlay.h"


@interface MFMarker: MFOverlay
  @property(nonatomic) CLLocationCoordinate2D position;
  @property(nonatomic) CGPoint groundAnchor;
  @property(nonatomic, strong, setter=setIconView:) UIView * _Nullable iconView;
  @property(nonatomic) double elevation;
  @property(nonatomic, strong) UIImage * _Nullable icon;
  @property(nonatomic, assign, setter=setVisible:) bool isVisible;
  
  /**
   * Title, a short description of the overlay. Some overlays, such as markers, will display the title
   * on the map. The title is also the default accessibility text.
   */
  @property(nonatomic, strong, nullable) NSString *title;
  
  /** Snippet text, shown beneath the title in the info window when selected. */
  @property(nonatomic, copy, nullable) NSString *snippet;
  
  /**
   * The info window anchor specifies the point in the icon image at which to anchor the info window,
   * which will be displayed directly above this point. This point is specified within the same space
   * as groundAnchor.
   */
  @property(nonatomic, assign) CGPoint infoWindowAnchor;
  
@end

#endif /* MFMarker_h */
