//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryGalleryAssetMetadata;

@interface IGStoryGalleryAssetAsyncTask : NSObject
{
    id _lock;
    CDUnknownBlockType _onSuccessBlock;
    CDUnknownBlockType _onCancelBlock;
    _Bool _isCancelled;
    _Bool _isFinalImage;
    IGStoryGalleryAssetMetadata *_result;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFinalImage; // @synthesize isFinalImage=_isFinalImage;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onSuccess:(CDUnknownBlockType)arg1;
- (void)cancel;
@property(retain, nonatomic) IGStoryGalleryAssetMetadata *result; // @synthesize result=_result;
- (id)init;

@end

