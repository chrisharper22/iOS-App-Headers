//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGHashtagRelatedItemsCollectionViewCellDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGHashtagRelatedHashtagsModel, IGListAdapter, IGRelatedItemsLogger, IGTextLinkCarouselConfig, IGUserSession, NSArray, NSString;

@interface IGHashtagRelatedItemsSectionController : IGListSectionController <IGHashtagRelatedItemsCollectionViewCellDelegate, IGListAdapterDataSource>
{
    NSArray *_relatedHashtags;
    IGRelatedItemsLogger *_relatedItemsLogger;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGHashtagRelatedHashtagsModel *_relatedHashtagsModel;
    IGTextLinkCarouselConfig *_textLinkConfig;
    IGListAdapter *_richPreviewListAdapter;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)hashtagRelatedItemsCell:(id)arg1 willDisplayRelatedItem:(id)arg2;
- (void)hashtagRelatedItemsCell:(id)arg1 didSelectRelatedItem:(id)arg2;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 relatedHashtagsModel:(id)arg3 hostHashtagPageHashtagModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
