//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUserSession, NSArray, NSDictionary, NSString, UIViewController;

@protocol IGServiceHelperProtocol <NSObject>
+ (NSString *)shortServiceName;
@property(nonatomic) _Bool disabled;
@property(nonatomic) _Bool wantsToShare;
@property(nonatomic) _Bool isAvailableForSharing;
- (UIViewController *)viewControllerForAdvancedOptionsWithUserSession:(IGUserSession *)arg1;
- (NSDictionary *)sharingInfo;
- (void)setupServerLinkage:(NSDictionary *)arg1;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (_Bool)supportsCrosspostingWith:(NSArray *)arg1 forMediaType:(long long)arg2;
- (_Bool)supportsMediaType:(long long)arg1;
- (_Bool)isAvailableInCurrentLocale;
- (NSString *)detailText;
- (_Bool)isConfiguredForCrossPosting;
- (_Bool)shouldUseSubtitleCellStyle;
- (_Bool)hidden;
- (_Bool)isConfiguredOnlyOnServer;
- (_Bool)isConfigured;
- (void)logoutAndUnlink;
- (void)logout;
- (NSString *)shareKey;
- (NSString *)serviceName;
@end
