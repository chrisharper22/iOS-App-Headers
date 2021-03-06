//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class IGQPDataStoreEventRecord, NSString;

@interface IGQPDataStoreEventRecordList : NSObject <NSCoding>
{
    NSString *_event;
    IGQPDataStoreEventRecord *_mostRecentRecord;
    long long _count;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) IGQPDataStoreEventRecord *mostRecentRecord; // @synthesize mostRecentRecord=_mostRecentRecord;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
- (id)initWithRecord:(id)arg1 count:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

