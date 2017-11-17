//
//  YXViewPagerSubVcScrollDelegate.h
//  Pods
//
//  Created by yixiang on 2017/7/4.
//
//
/* lzy171117注:
 SubVC的滚动事件，传递给RootVc
 */
#import <Foundation/Foundation.h>
#define OffsetDistanceV 0.3f;
#define scrollThresholdOffsetUp 60.0f
#define scrollThresholdOffsetDown 60.0f

@protocol YXViewPagerSubVcScrollDelegate <NSObject>

- (void)scrollViewWillBeginDraggingWithOffset:(CGFloat)offsetY;

- (void)scrollViewDidScrollWithOffset:(CGFloat)offsetY;

- (void)beginToPullRefresh;

@end
