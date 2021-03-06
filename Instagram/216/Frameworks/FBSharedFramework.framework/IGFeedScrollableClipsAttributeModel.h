//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSundialMusicAsset, IGSundialOriginalAudioAsset, NSString;

@interface IGFeedScrollableClipsAttributeModel : NSObject
{
    NSString *_pk;
    NSString *_displayName;
    NSString *_displayQuantity;
    IGSundialMusicAsset *_music;
    IGSundialOriginalAudioAsset *_originalAudio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSundialOriginalAudioAsset *originalAudio; // @synthesize originalAudio=_originalAudio;
@property(readonly, nonatomic) IGSundialMusicAsset *music; // @synthesize music=_music;
@property(readonly, copy, nonatomic) NSString *displayQuantity; // @synthesize displayQuantity=_displayQuantity;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)initWithPk:(id)arg1 displayName:(id)arg2 displayQuantity:(id)arg3 musicParser:(id)arg4 originalAudioParser:(id)arg5;

@end

