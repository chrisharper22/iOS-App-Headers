//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAppLink, NSDictionary;
@protocol FBSDKSettings;

@interface FBSDKAppLinkNavigation : NSObject
{
    NSDictionary *_extras;
    NSDictionary *_appLinkData;
    FBSDKAppLink *_appLink;
    id <FBSDKSettings> _settings;
}

+ (long long)navigationTypeForLink:(id)arg1;
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;
+ (void)navigateToURL:(id)arg1 resolver:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)navigateToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resolveAppLink:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resolveAppLink:(id)arg1 resolver:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2;
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3 settings:(id)arg4;
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;
+ (void)setDefaultResolver:(id)arg1;
+ (id)defaultResolver;
+ (void)setAppLinkResolver:(id)arg1;
+ (id)appLinkResolver;
+ (void)setAppLinkEventPoster:(id)arg1;
+ (id)appLinkEventPoster;
+ (void)setUrlOpener:(id)arg1;
+ (id)urlOpener;
+ (void)setSettings:(id)arg1;
+ (id)settings;
+ (void)configureWithSettings:(id)arg1 urlOpener:(id)arg2 appLinkEventPoster:(id)arg3 appLinkResolver:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) FBSDKAppLink *appLink; // @synthesize appLink=_appLink;
@property(copy, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (long long)navigationTypeForTargets:(id)arg1 urlOpener:(id)arg2;
@property(readonly, nonatomic) long long navigationType;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3 eventPoster:(id)arg4;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;
- (long long)navigateWithUrlOpener:(id)arg1 eventPoster:(id)arg2 error:(id *)arg3;
- (long long)navigate:(id *)arg1;
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;
- (id)stringByEscapingQueryString:(id)arg1;

@end
