//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectQuickReplyListCellSwipeActionManagerDelegate-Protocol.h"

@class IGDirectQuickReplyListCell, NSString;

@interface IGDirectQuickReplyListCellSwipeActionManager : NSObject <IGDirectQuickReplyListCellSwipeActionManagerDelegate>
{
    IGDirectQuickReplyListCell *_openCell;
}

- (void).cxx_destruct;
- (void)quickReplyListCellDidHideActionsForCell:(id)arg1;
- (void)quickReplyListCellDidShowActionsForCell:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

