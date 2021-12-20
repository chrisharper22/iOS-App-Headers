//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGUpcomingEventStickerModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _reminderEnabled;
    NSString *_pk;
    NSString *_title;
    double _startUnixTimestamp;
    double _endUnixTimestamp;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool reminderEnabled; // @synthesize reminderEnabled=_reminderEnabled;
@property(readonly, nonatomic) double endUnixTimestamp; // @synthesize endUnixTimestamp=_endUnixTimestamp;
@property(readonly, nonatomic) double startUnixTimestamp; // @synthesize startUnixTimestamp=_startUnixTimestamp;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 title:(id)arg2 startUnixTimestamp:(double)arg3 endUnixTimestamp:(double)arg4 reminderEnabled:(_Bool)arg5;
- (id)initWithCoder:(id)arg1;

@end

