//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCoWatchScrollableReelsCellSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGCoWatchScrollableReelsModel, IGListAdapter, IGUserSession, NSString;
@protocol IGCoWatchScrollableReelsSectionControllerDelegate;

@interface IGCoWatchScrollableReelsSectionController : IGListSectionController <IGListAdapterDataSource, IGCoWatchScrollableReelsCellSectionControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGListAdapter *_listAdapter;
    id <IGCoWatchScrollableReelsSectionControllerDelegate> _delegate;
    IGCoWatchScrollableReelsModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGCoWatchScrollableReelsModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGCoWatchScrollableReelsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clipsCellSectionController:(id)arg1 didSelectedViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

