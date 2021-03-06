//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedItemActionSheetControllerDelegate-Protocol.h"

@class IGMedia, IGUserSession, NSString;

@interface IGFeedActionSheetHandler : NSObject <IGFeedItemActionSheetControllerDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    NSString *_analyticsModule;
    _Bool _shouldPauseVideoWhenMoreOptionSheetPresent;
}

- (void).cxx_destruct;
- (void)actionSheetControllerDidSelectAction:(unsigned long long)arg1;
- (void)handleMoreOptionsButtonPressedWithItemConfiguration:(id)arg1 sponsoredSupportConfiguration:(id)arg2 loggingProvider:(id)arg3 report:(id)arg4 sponsoredPostInfo:(id)arg5;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

