//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaMetadata, NSString, NSURL;

@interface IGEditAltTextViewModel : NSObject
{
    NSString *_mediaId;
    NSURL *_imageURL;
    IGMediaMetadata *_mediaMetadata;
    NSString *_accessibilityCaption;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityCaption; // @synthesize accessibilityCaption=_accessibilityCaption;
@property(readonly, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)snapshot;
- (id)initWithMetadata:(id)arg1;
- (id)initWithMediaId:(id)arg1 imageURL:(id)arg2 imageSize:(struct CGSize)arg3 accessibilityCaption:(id)arg4;

@end

