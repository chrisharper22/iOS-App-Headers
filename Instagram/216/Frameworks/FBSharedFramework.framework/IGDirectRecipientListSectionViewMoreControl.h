//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectRecipientListSectionViewMoreControl : NSObject
{
    _Bool _onlyAllowOneTap;
    _Bool _haveTappedViewMore;
    long long _numberOfAvailableItemsToDisplay;
    long long _numberOfInitialItemsToDisplay;
    long long _numberOfMaxItemsToDisplay;
    long long _numberOfAdditionalItemsToDisplayOnTap;
    long long _numberOfCurrentlyDisplayedItems;
}

@property(readonly, nonatomic) _Bool haveTappedViewMore; // @synthesize haveTappedViewMore=_haveTappedViewMore;
@property(readonly, nonatomic) _Bool onlyAllowOneTap; // @synthesize onlyAllowOneTap=_onlyAllowOneTap;
@property(readonly, nonatomic) long long numberOfCurrentlyDisplayedItems; // @synthesize numberOfCurrentlyDisplayedItems=_numberOfCurrentlyDisplayedItems;
@property(readonly, nonatomic) long long numberOfAdditionalItemsToDisplayOnTap; // @synthesize numberOfAdditionalItemsToDisplayOnTap=_numberOfAdditionalItemsToDisplayOnTap;
@property(readonly, nonatomic) long long numberOfMaxItemsToDisplay; // @synthesize numberOfMaxItemsToDisplay=_numberOfMaxItemsToDisplay;
@property(readonly, nonatomic) long long numberOfInitialItemsToDisplay; // @synthesize numberOfInitialItemsToDisplay=_numberOfInitialItemsToDisplay;
@property(readonly, nonatomic) long long numberOfAvailableItemsToDisplay; // @synthesize numberOfAvailableItemsToDisplay=_numberOfAvailableItemsToDisplay;
- (void)incrementFromTapInSection;
- (_Bool)shouldDisplayViewMoreButton;
- (id)initWithNumberOfAvailableItemsToDisplay:(long long)arg1 numberOfInitialItemsToDisplay:(long long)arg2 numberOfMaxItemsToDisplay:(long long)arg3 numberOfAdditionalItemsToDisplayOnTap:(long long)arg4 onlyAllowOneTap:(_Bool)arg5 haveTappedViewMore:(_Bool)arg6;

@end

