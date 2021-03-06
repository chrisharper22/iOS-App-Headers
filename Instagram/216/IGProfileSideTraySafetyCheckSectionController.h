//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGSideTrayItemSectionController-Protocol.h"

@class IGSideTrayRowItemModel, IGUserSession, NSString;
@protocol IGSideTrayItemSectionControllerDelegate, IGSideTrayLoggingController;

@interface IGProfileSideTraySafetyCheckSectionController : IGListSectionController <IGSideTrayItemSectionController>
{
    IGSideTrayRowItemModel *_item;
    id <IGSideTrayLoggingController> _loggingController;
    IGUserSession *_userSession;
    id <IGSideTrayItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)badgeCount;
- (_Bool)isBadged;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 loggingController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

