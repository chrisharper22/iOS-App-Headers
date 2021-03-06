//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSURL;
@protocol ZZChannel;

@interface ZZArchive : NSObject
{
    id <ZZChannel> _channel;
    unsigned long long _encoding;
    NSData *_contents;
    NSArray *_entries;
}

+ (id)archiveWithData:(id)arg1 error:(out id *)arg2;
+ (id)archiveWithURL:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (_Bool)updateEntries:(id)arg1 error:(out id *)arg2;
- (_Bool)loadCanMiss:(_Bool)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithChannel:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(out id *)arg3;

@end

