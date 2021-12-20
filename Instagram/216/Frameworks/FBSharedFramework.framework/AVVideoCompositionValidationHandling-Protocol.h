//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class AVAsset, AVVideoComposition, AVVideoCompositionLayerInstruction, NSString;
@protocol AVVideoCompositionInstruction;

@protocol AVVideoCompositionValidationHandling <NSObject>

@optional
- (_Bool)videoComposition:(AVVideoComposition *)arg1 shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id <AVVideoCompositionInstruction>)arg2 layerInstruction:(AVVideoCompositionLayerInstruction *)arg3 asset:(AVAsset *)arg4;
- (_Bool)videoComposition:(AVVideoComposition *)arg1 shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id <AVVideoCompositionInstruction>)arg2;
- (_Bool)videoComposition:(AVVideoComposition *)arg1 shouldContinueValidatingAfterFindingEmptyTimeRange:(CDStruct_e83c9415)arg2;
- (_Bool)videoComposition:(AVVideoComposition *)arg1 shouldContinueValidatingAfterFindingInvalidValueForKey:(NSString *)arg2;
@end
