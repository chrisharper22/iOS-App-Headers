//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAutoupdaterHost, NSString;

@protocol FBAutoupdaterCleaner <NSObject>
+ (id)new;
@property(readonly, nonatomic) FBAutoupdaterHost *host;
- (void)removeTemporaryFiles;
- (void)removeUnappliedUpdates;
- (void)removePath:(NSString *)arg1;
- (id)initWithHost:(FBAutoupdaterHost *)arg1;
- (id)init;

@optional
- (void)cleanUpAfterUpdateInstallationAttempt;
@end

