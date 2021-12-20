//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGLiveBroadcastUserSectionControllerDelegate-Protocol.h"

@class IGLabelItemViewModel, IGLiveBroadcastLogger, IGLiveDefaultSheetEmptyView, NSArray, NSString;
@protocol IGLiveAcceptRequestDataSourceDelegate;

@interface IGLiveAcceptRequestSheetDataSource : NSObject <IGLiveBroadcastUserSectionControllerDelegate, IGListAdapterDataSource>
{
    NSString *_module;
    NSArray *_requestedUsers;
    IGLiveDefaultSheetEmptyView *_emptyView;
    IGLabelItemViewModel *_subHeaderLabel;
    IGLiveBroadcastLogger *_logger;
    id <IGLiveAcceptRequestDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveAcceptRequestDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)liveBroadcastUserSectionControllerShouldDisplayWaveButton:(id)arg1;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapWaveButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapMoreButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapInviteButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 userSource:(id)arg2 selected:(_Bool)arg3;
- (void)liveBroadcastUserSectionController:(id)arg1 userSource:(id)arg2 toggled:(_Bool)arg3;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapOnUserSource:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setRequestedUsers:(id)arg1;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

