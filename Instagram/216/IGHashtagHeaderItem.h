//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGHashtagHeaderViewConfiguration, IGHashtagModel, IGMedia, IGStoryReel;

@interface IGHashtagHeaderItem : NSObject <IGListDiffable>
{
    IGHashtagModel *_hashtagModel;
    IGHashtagHeaderViewConfiguration *_hashtagHeaderViewConfiguration;
    IGStoryReel *_reel;
    IGMedia *_headerPhotoFeedItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMedia *headerPhotoFeedItem; // @synthesize headerPhotoFeedItem=_headerPhotoFeedItem;
@property(readonly, nonatomic) IGStoryReel *reel; // @synthesize reel=_reel;
@property(readonly, nonatomic) IGHashtagHeaderViewConfiguration *hashtagHeaderViewConfiguration; // @synthesize hashtagHeaderViewConfiguration=_hashtagHeaderViewConfiguration;
@property(readonly, nonatomic) IGHashtagModel *hashtagModel; // @synthesize hashtagModel=_hashtagModel;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)headerItemWithUpdatedHashtagFollowState:(long long)arg1 updatedDropdownViewState:(long long)arg2;
- (id)headerItemWithUpdatedDropdownViewState:(long long)arg1;
- (id)initWithHashtagModel:(id)arg1 headerViewConfiguration:(id)arg2 reel:(id)arg3 headerPhotoFeedItem:(id)arg4;

@end

