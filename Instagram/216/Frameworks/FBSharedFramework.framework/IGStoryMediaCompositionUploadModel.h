//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGStoryCreationModel;
@protocol IGQuickCamOutputAsset;

@interface IGStoryMediaCompositionUploadModel : NSObject <NSCopying>
{
    id <IGQuickCamOutputAsset> _outputAsset;
    IGStoryCreationModel *_storyModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryCreationModel *storyModel; // @synthesize storyModel=_storyModel;
@property(readonly, nonatomic) id <IGQuickCamOutputAsset> outputAsset; // @synthesize outputAsset=_outputAsset;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOutputAsset:(id)arg1 storyModel:(id)arg2;

@end

