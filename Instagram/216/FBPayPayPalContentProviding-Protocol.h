//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FBPayPayPalContentProviding <NSObject>
- (NSString *)viewControllerDismissalAlertCloseText;
- (NSString *)viewControllerDismissalAlertStayText;
- (NSString *)viewControllerDismissalAlertMessageText;
- (NSString *)viewControllerDismissalAlertTitleText;
- (NSString *)viewControllerActionButtonText;
- (NSString *)viewControllerTermsUrl;
- (NSString *)viewControllerTerms;
- (NSString *)viewControllerDescriptionText;
- (NSString *)viewControllerSubtitleText;
- (NSString *)viewControllerTitleText;
- (void)reloadContentWithScreenType:(long long)arg1 completion:(void (^)(void))arg2;
@end

