//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectInboxThreadCellViewModel, IGDirectInboxThreadSectionController;

@protocol IGDirectInboxThreadSectionControllerSwipeDelegate <NSObject>
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didBeginPanningWithViewModel:(IGDirectInboxThreadCellViewModel *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didSwipeOpen:(_Bool)arg2 viewModel:(IGDirectInboxThreadCellViewModel *)arg3;
@end
