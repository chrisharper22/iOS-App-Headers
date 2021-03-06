//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListWorkingRangeDelegate-Protocol.h"

@class IGPostItem, NSString;
@protocol IGFundraiserMediaPickerPostItemSectionControllerDelegate;

@interface IGFundraiserMediaPickerPostItemSectionController : IGListSectionController <IGListWorkingRangeDelegate>
{
    IGPostItem *_postItem;
    struct IGGridLayoutConfiguration _layoutConfig;
    NSString *_analyticsModule;
    id <IGFundraiserMediaPickerPostItemSectionControllerDelegate> _selectionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFundraiserMediaPickerPostItemSectionControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithAnalyticsModule:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

