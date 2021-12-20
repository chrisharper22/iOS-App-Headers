//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGLoadMoreResponseType-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IGFanClubMemberListResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    _Bool _moreAvailable;
    NSArray *_displayedMembers;
    NSDictionary *_memberDates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isMoreAvailable) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSDictionary *memberDates; // @synthesize memberDates=_memberDates;
@property(readonly, copy, nonatomic) NSArray *displayedMembers; // @synthesize displayedMembers=_displayedMembers;
- (id)maxId;
- (id)initWithDisplayedMembers:(id)arg1 memberDates:(id)arg2 maxId:(id)arg3 moreAvailable:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

