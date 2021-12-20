//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;
@protocol IGContextSheetSMBSupportLinkHandlerDelegate;

@interface IGContextSheetSMBSupportLinkHandler : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    id <IGContextSheetSMBSupportLinkHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleOpenUniversalLinkIfAvailableOtherwiseInAppBrowserWithUrlString:(id)arg1 presentingViewController:(id)arg2 success:(_Bool)arg3;
- (void)_openUniversalLinkIfAvailableOtherwiseInAppBrowserWithUrlString:(id)arg1 presentingViewController:(id)arg2;
- (void)_openInAppBrowserWithUrlString:(id)arg1 presentingViewController:(id)arg2;
- (void)openLinkWithUrlString:(id)arg1 presentingViewController:(id)arg2 serviceType:(long long)arg3;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3;

@end
