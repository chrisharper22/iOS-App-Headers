//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBReliabilityStatisticsCounter : NSObject
{
    int _primaryId;
    int _secondaryId;
    int _value;
}

@property(readonly, nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) int secondaryId; // @synthesize secondaryId=_secondaryId;
@property(readonly, nonatomic) int primaryId; // @synthesize primaryId=_primaryId;
- (id)initWithPrimaryId:(int)arg1 secondaryId:(int)arg2 value:(int)arg3;

@end

