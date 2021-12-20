//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface IGAudioLyricsPhraseModel : NSObject <NSSecureCoding>
{
    NSString *_text;
    double _startTime;
    double _endTime;
    NSArray *_words;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *words; // @synthesize words=_words;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *wordStrings;
- (id)initWithText:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 words:(id)arg4;

@end

