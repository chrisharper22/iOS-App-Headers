//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGTypewriterRevealDynamicStickerPage : NSObject
{
    NSString *_text;
    long long _firstPhraseIndex;
    long long _lastPhraseIndex;
    NSArray *_phraseModels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *phraseModels; // @synthesize phraseModels=_phraseModels;
@property(readonly, nonatomic) long long lastPhraseIndex; // @synthesize lastPhraseIndex=_lastPhraseIndex;
@property(readonly, nonatomic) long long firstPhraseIndex; // @synthesize firstPhraseIndex=_firstPhraseIndex;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSArray *words;
- (id)initWithText:(id)arg1 firstPhraseIndex:(long long)arg2 lastPhraseIndex:(long long)arg3 phraseModels:(id)arg4;

@end

