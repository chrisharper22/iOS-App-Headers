//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class FBMediaUploadFileStream, IGCodableFileAssetReference, IGVideoComposition;

@interface IGVideoSource : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGVideoComposition *_videoComposition;
    FBMediaUploadFileStream *_fileStream;
    IGCodableFileAssetReference *_passthroughVideo;
}

+ (id)videoComposition:(id)arg1;
+ (id)passthroughVideo:(id)arg1;
+ (id)fileStream:(id)arg1;
- (void).cxx_destruct;
- (void)matchVideoComposition:(CDUnknownBlockType)arg1 fileStream:(CDUnknownBlockType)arg2 passthroughVideo:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
