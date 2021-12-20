//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAuthHeaderStore;
@protocol IGAPIClient, IGMultipleAccountHandling, IGPushNotificationRegisterAnnouncer, IGUserLauncherSetProviding;

@interface IGPushRegistrationHelper : NSObject
{
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    IGAuthHeaderStore *_authHeaderStore;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    id <IGPushNotificationRegisterAnnouncer> _announcer;
    _Bool _needToUpdatePushToken;
    id <IGAPIClient> _networker;
}

+ (void)_showPushPermissionDialogIfNeededWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 module:(id)arg3 currentUserId:(id)arg4 authorizationStatus:(long long)arg5 analyticsLogger:(id)arg6 pushRegistrationAnnouncer:(id)arg7 userPk:(id)arg8 launcherSetProvider:(id)arg9;
+ (void)_registerForRemoteNotificationsWithCompletion:(CDUnknownBlockType)arg1 module:(id)arg2 analyticsLogger:(id)arg3 pushRegistrationAnnouncer:(id)arg4 userPk:(id)arg5 launcherSetProvider:(id)arg6;
+ (void)_logSystemPushPermissionsPromptWithPermissionsGranted:(_Bool)arg1 module:(id)arg2 error:(id)arg3 analyticsLogger:(id)arg4 userPk:(id)arg5;
+ (void)_logCustomPushPermissionDialogImpressionWithModule:(id)arg1 currentUserId:(id)arg2 extraParams:(id)arg3 analyticsLogger:(id)arg4;
+ (id)pushNotificationCategoriesWithLauncherSetProvider:(id)arg1;
+ (unsigned long long)authorizationOptions;
+ (_Bool)appHasAskedSystemForPushPermissions;
+ (void)registerForRemoteNotificationsWithAnnouncer:(id)arg1;
+ (void)_notifyWhenSystemPushPermissionsAreGrantedWithNotificationBlock:(CDUnknownBlockType)arg1;
+ (void)_registerForRemoteNotificationsAndShowSystemPushPermissionsAlertIfNecessaryWithModule:(id)arg1 analyticsLogger:(id)arg2 completion:(CDUnknownBlockType)arg3 pushRegistrationAnnouncer:(id)arg4 userPk:(id)arg5 launcherSetProvider:(id)arg6;
+ (void)registerForRemoteNotificationsAndShowSystemPushPermissionsAlertIfNecessaryWithModule:(id)arg1 analyticsLogger:(id)arg2 completion:(CDUnknownBlockType)arg3 pushRegistrationAnnouncer:(id)arg4 userPk:(id)arg5 launcherSetProvider:(id)arg6;
+ (void)startPushRegistrationWithForce:(_Bool)arg1 launcherSetProvider:(id)arg2 module:(id)arg3 userSession:(id)arg4 currentUserId:(id)arg5 completion:(CDUnknownBlockType)arg6 pushRegistrationAnnouncer:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needToUpdatePushToken; // @synthesize needToUpdatePushToken=_needToUpdatePushToken;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)_onBackground:(id)arg1;
- (void)markAsNeedToUpdatePushToken;
- (void)checkAndLogPushRegistrationPermissionIfNecessaryWithAnalyticsLogger:(id)arg1;
- (void)_registerToken:(id)arg1 deviceTypeString:(id)arg2 builder:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerPushKitToken:(id)arg1 error:(id)arg2 analyticsLogger:(id)arg3;
- (void)registerRegularPushToken:(id)arg1 error:(id)arg2 analyticsLogger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithNetworker:(id)arg1 multipleAccountHandler:(id)arg2 authHeaderStore:(id)arg3 launcherSetProvider:(id)arg4 pushRegistrationAnnouncer:(id)arg5;

@end
