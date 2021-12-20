//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSNumber;

@interface IGContentWarningClassifier : NSObject <NSCopying>
{
    NSNumber *_bullyScore;
    NSNumber *_hateScore;
    NSNumber *_sexualScore;
    NSNumber *_spamScore;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *spamScore; // @synthesize spamScore=_spamScore;
@property(readonly, nonatomic) NSNumber *sexualScore; // @synthesize sexualScore=_sexualScore;
@property(readonly, nonatomic) NSNumber *hateScore; // @synthesize hateScore=_hateScore;
@property(readonly, nonatomic) NSNumber *bullyScore; // @synthesize bullyScore=_bullyScore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBullyScore:(id)arg1 hateScore:(id)arg2 sexualScore:(id)arg3 spamScore:(id)arg4;

@end

