//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGSaveToCollectionsThumbnailModel, NSString;
@protocol IGSaveToCollectionsSectionControllerDelegate;

@interface IGSaveToCollectionsSectionController : IGListSectionController
{
    NSString *_module;
    id <IGSaveToCollectionsSectionControllerDelegate> _delegate;
    IGSaveToCollectionsThumbnailModel *_thumbnailModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSaveToCollectionsThumbnailModel *thumbnailModel; // @synthesize thumbnailModel=_thumbnailModel;
@property(nonatomic) __weak id <IGSaveToCollectionsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewModelForCollection:(id)arg1;
- (id)collectionAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDelegate:(id)arg1 module:(id)arg2;

@end
