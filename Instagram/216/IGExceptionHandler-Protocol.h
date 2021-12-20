//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGBreakpadExceptionHandler-Protocol.h"

@class IGUserSession, NSDictionary, NSString;

@protocol IGExceptionHandler <IGBreakpadExceptionHandler>
@property(readonly, nonatomic) _Bool hasEmptyCrashReport;
- (_Bool)hasEmptyFatalCrashReport;
- (NSString *)previousAppSessionLastAppState;
- (void)setExperimentsGroupsMapping:(NSDictionary *)arg1;
- (void)didSwitchToNewUserPK:(NSString *)arg1 username:(NSString *)arg2;
- (void)didLogoutAllUsers;
- (void)setupWithUserSession:(IGUserSession *)arg1;
@end
