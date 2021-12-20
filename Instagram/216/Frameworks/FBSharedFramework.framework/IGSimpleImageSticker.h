//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/IGStoryThumbnailProvidingView-Protocol.h>

@class NSString, NSURL, UIBezierPath, UIImage, UIImageView;

@interface IGSimpleImageSticker : UIView <IGStoryThumbnailProvidingView, IGSerializable>
{
    UIBezierPath *_cachedOutlinePath;
    _Bool _outlinePathComputationInProgress;
    NSURL *_cachedImageFileURL;
    UIImageView *_imageView;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)_recomputeOutlinePath;
- (id)outlinePath;
- (id)thumbnailView;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
