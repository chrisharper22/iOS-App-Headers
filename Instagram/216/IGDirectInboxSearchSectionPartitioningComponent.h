//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGDirectInboxSearchSectionPartitioningComponent : NSObject
{
    NSString *_sectionTitle;
    long long _maxRecipients;
    CDUnknownBlockType _filterBlock;
    CDUnknownBlockType _comparator;
    NSArray *_expandedSections;
    unsigned long long _type;
    long long _recipientListSectionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long recipientListSectionType; // @synthesize recipientListSectionType=_recipientListSectionType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *expandedSections; // @synthesize expandedSections=_expandedSections;
@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (id)initWithSectionTitle:(id)arg1 maxRecipients:(long long)arg2 filterBlock:(CDUnknownBlockType)arg3 comparator:(CDUnknownBlockType)arg4 expandedSections:(id)arg5 type:(unsigned long long)arg6 recipientListSectionType:(long long)arg7;

@end
