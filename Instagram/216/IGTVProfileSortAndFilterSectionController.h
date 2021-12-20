//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGTVProfileSortAndFilterCellDelegate-Protocol.h"

@class NSString;
@protocol IGTVProfileSortAndFilterSectionControllerDelegate;

@interface IGTVProfileSortAndFilterSectionController : IGListSectionController <IGTVProfileSortAndFilterCellDelegate>
{
    id <IGTVProfileSortAndFilterSectionControllerDelegate> _delegate;
    unsigned long long _sortType;
}

- (void).cxx_destruct;
- (void)profileSortAndFilterCellDidTapSortFilterButton:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithSortType:(unsigned long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

