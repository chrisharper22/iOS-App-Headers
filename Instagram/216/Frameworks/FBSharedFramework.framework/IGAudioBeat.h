//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@interface IGAudioBeat : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isTwobar;
    _Bool _isPhrase;
    _Bool _isDownbeat;
    _Bool _isStrong;
    double _timeInSeconds;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isStrong; // @synthesize isStrong=_isStrong;
@property(readonly, nonatomic) _Bool isDownbeat; // @synthesize isDownbeat=_isDownbeat;
@property(readonly, nonatomic) _Bool isPhrase; // @synthesize isPhrase=_isPhrase;
@property(readonly, nonatomic) _Bool isTwobar; // @synthesize isTwobar=_isTwobar;
@property(readonly, nonatomic) double timeInSeconds; // @synthesize timeInSeconds=_timeInSeconds;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimeInSeconds:(double)arg1 isTwobar:(_Bool)arg2 isPhrase:(_Bool)arg3 isDownbeat:(_Bool)arg4 isStrong:(_Bool)arg5;

@end

