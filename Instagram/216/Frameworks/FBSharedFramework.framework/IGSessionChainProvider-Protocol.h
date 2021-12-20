//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IGMainAppViewControllerProvider, NSString, UIViewController;
@protocol IGAnalyticsEventLoggingProtocol;

@protocol IGSessionChainProvider
- (void)setLogger:(id <IGAnalyticsEventLoggingProtocol>)arg1;
- (void)setMainAppViewControllerProvider:(IGMainAppViewControllerProvider *)arg1;
- (void)willSwitchTabInNextUpdate;
- (void)updateCurrentChainWithAppearedViewController:(UIViewController *)arg1 withClickPoint:(NSString *)arg2;
- (void)updateCurrentChain;
- (NSString *)sessionChain;
@end

