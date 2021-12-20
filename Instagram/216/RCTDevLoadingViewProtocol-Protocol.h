//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, RCTLoadingProgress, UIColor;

@protocol RCTDevLoadingViewProtocol <NSObject>
+ (void)setEnabled:(_Bool)arg1;
- (void)hide;
- (void)updateProgress:(RCTLoadingProgress *)arg1;
- (void)showWithURL:(NSURL *)arg1;
- (void)showMessage:(NSString *)arg1 color:(UIColor *)arg2 backgroundColor:(UIColor *)arg3;
@end

