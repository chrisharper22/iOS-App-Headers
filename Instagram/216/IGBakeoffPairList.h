//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSArray, NSString;

@interface IGBakeoffPairList : NSObject <IGListDiffable>
{
    NSString *_bakeoffID;
    NSString *_title;
    unsigned long long _type;
    NSArray *_pairs;
    NSString *_surveyQPType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *surveyQPType; // @synthesize surveyQPType=_surveyQPType;
@property(readonly, copy, nonatomic) NSArray *pairs; // @synthesize pairs=_pairs;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *bakeoffID; // @synthesize bakeoffID=_bakeoffID;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBakeoffID:(id)arg1 title:(id)arg2 type:(unsigned long long)arg3 pairs:(id)arg4 surveyQPType:(id)arg5;

@end

