//
//  YXViewPagerEventDelegate.h
//  Pods
//
//  Created by yixiang on 17/3/29.
//
//
/* lzy171117注:
 子页面把数据传给主框架,其实在渲染主框架的时候，主框架作为代理，传给了子页面。
 */
#import <Foundation/Foundation.h>

@protocol YXViewPagerEventDelegate <NSObject>

- (void)handleEventWithEventName:(NSString *)eventName context:(NSDictionary *)context;

@end
