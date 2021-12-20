//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaMetadata, IGStoryCreationManagerShareInfo;
@protocol IGAnalyticsUploadWaterfall;

@interface IGStoryCreationPendingMultiConfigure : NSObject
{
    IGMediaMetadata *_metadata;
    long long _dataType;
    IGStoryCreationManagerShareInfo *_shareInfo;
    id <IGAnalyticsUploadWaterfall> _uploadWaterfall;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGAnalyticsUploadWaterfall> uploadWaterfall; // @synthesize uploadWaterfall=_uploadWaterfall;
@property(readonly, nonatomic) IGStoryCreationManagerShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) IGMediaMetadata *metadata; // @synthesize metadata=_metadata;
- (id)initWithMetadata:(id)arg1 dataType:(long long)arg2 shareInfo:(id)arg3 uploadWaterfall:(id)arg4;

@end
