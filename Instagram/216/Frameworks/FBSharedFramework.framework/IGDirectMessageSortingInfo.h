//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate;

@interface IGDirectMessageSortingInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isOutgoing;
    NSDate *_primarySortingDate;
    NSDate *_secondarySortingDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(readonly, copy, nonatomic) NSDate *secondarySortingDate; // @synthesize secondarySortingDate=_secondarySortingDate;
@property(readonly, copy, nonatomic) NSDate *primarySortingDate; // @synthesize primarySortingDate=_primarySortingDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPrimarySortingDate:(id)arg1 secondarySortingDate:(id)arg2 isOutgoing:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

