//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGFeedStatusView;

@interface IGFeedStatusSectionController : IGListSectionController
{
    IGFeedStatusView *_statusView;
    double _heightOffset;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_invalidateLayoutIfAppropriate;
- (void)setHeightOffset:(double)arg1;
- (void)updateFeedStatusView;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFeedStatusView:(id)arg1;

@end

