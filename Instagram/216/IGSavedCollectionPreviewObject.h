//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSavedMediaCollection, IGSavedMediaCollectionsThumbnailSectionController;

@interface IGSavedCollectionPreviewObject : NSObject
{
    IGSavedMediaCollection *_collection;
    IGSavedMediaCollectionsThumbnailSectionController *_sectionController;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSavedMediaCollectionsThumbnailSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) IGSavedMediaCollection *collection; // @synthesize collection=_collection;
- (id)initWithCollection:(id)arg1 sourceRect:(struct CGRect)arg2 sectionController:(id)arg3;

@end
