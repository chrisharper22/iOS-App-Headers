//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterReactResourceInformationProvider-Protocol.h"
#import "FBAutoupdaterReactServiceDelegate-Protocol.h"
#import "IGUserSessionEndingObject-Protocol.h"

@class FBAutoupdaterReactHost, FBAutoupdaterReactService, NSString;

@interface IGAutoupdaterReactService : NSObject <FBAutoupdaterReactServiceDelegate, IGUserSessionEndingObject, FBAutoupdaterReactResourceInformationProvider>
{
    FBAutoupdaterReactService *_internalService;
    FBAutoupdaterReactHost *_host;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBAutoupdaterReactHost *host; // @synthesize host=_host;
- (void)clearAllCurrentUpdates;
- (void)restartService;
- (void)checkForUpdate;
- (id)lastUpdateErrorMessage;
- (id)appliedUpdateWithError:(id *)arg1;
- (id)activeUpdateWithError:(id *)arg1;
- (id)bundledUpdateVersion;
- (id)activeUpdatePath;
- (id)nextActiveReactBundleVersion;
- (id)currentActiveReactBundleVersion;
- (id)expectedReactBundleVersion;
- (void)autoupdaterReactServiceDidActivateResourceAfterLockingUpdate:(id)arg1;
- (void)autoupdaterReactService:(id)arg1 didRequestReactResource:(id)arg2 lastActiveVersion:(id)arg3;
- (void)userSessionWillEnd;
- (void)stop;
- (void)start;
- (id)initWithUserPK:(id)arg1 networker:(id)arg2 facebookHelper:(id)arg3 launcherSet:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

