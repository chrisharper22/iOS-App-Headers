//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGStoryMusicCursor : NSObject
{
    NSString *_prevPageToken;
    NSString *_nextPageToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nextPageToken; // @synthesize nextPageToken=_nextPageToken;
@property(readonly, copy, nonatomic) NSString *prevPageToken; // @synthesize prevPageToken=_prevPageToken;
@property(readonly, nonatomic) _Bool hasNextPage;
@property(readonly, nonatomic) _Bool hasPrevPage;
- (id)initWithPrevPageToken:(id)arg1 nextPageToken:(id)arg2;

@end

