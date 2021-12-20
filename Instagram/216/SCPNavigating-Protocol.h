//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SCPNavigationDelegate;

@protocol SCPNavigating <NSObject>
@property(nonatomic) __weak id <SCPNavigationDelegate> delegate;
- (void)endFlow;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)presentNextViewController:(UIViewController *)arg1;
- (void)presentFirstViewController:(UIViewController *)arg1;
@end

