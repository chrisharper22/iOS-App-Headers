//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGInstagramURLHandler : NSObject
{
}

+ (id)_metadataDictForAppLinkURL:(id)arg1;
+ (id)_permalinkForAppLinkURL:(id)arg1;
+ (void)_openInstagramURL:(id)arg1 userSession:(id)arg2 deviceSession:(id)arg3 appSwitchTracker:(id)arg4 sourceApplication:(id)arg5 annotation:(id)arg6;
+ (void)_openInstagramURL:(id)arg1 appSurfaceIntent:(id)arg2 animated:(_Bool)arg3 userSession:(id)arg4 deviceSession:(id)arg5 sourceApplication:(id)arg6 annotation:(id)arg7;
+ (void)_openMediaInFeedCamera:(id)arg1 userSession:(id)arg2;
+ (void)_handleFoursquareURL:(id)arg1 userSession:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)_handleFBCallbackURL:(id)arg1 userSession:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)_handleFileBasedURL:(id)arg1 isContentURL:(_Bool)arg2 annotation:(id)arg3 userSession:(id)arg4 sourceApplication:(id)arg5;
+ (void)_handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 userSession:(id)arg4 deviceSession:(id)arg5 appSwitchTracker:(id)arg6;
+ (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 presentedUserSession:(id)arg4 deviceSession:(id)arg5 appSwitchTracker:(id)arg6;

@end
