//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PIPFloatingWindowManager.h"

#import "IGUserSessionEndingObject-Protocol.h"

@class IGUserDefaults;

@interface IGPictureInPictureManager : PIPFloatingWindowManager <IGUserSessionEndingObject>
{
    IGUserDefaults *_sessionUserDefaults;
}

- (void).cxx_destruct;
- (void)destroyFloatingWindow;
- (void)snapIntoFloatingWindowWithViewController:(id)arg1 fromView:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)restoreIfNecessaryWithUserSession:(id)arg1;
- (void)userSessionWillEnd;
- (id)initWithSessionUserDefaults:(id)arg1;

@end

