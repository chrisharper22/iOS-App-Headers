//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGTVSeriesCreationNetworkDataSourceDelegate;

@interface IGTVSeriesCreationNetworkDataSource : NSObject
{
    IGUserSession *_userSession;
    id <IGTVSeriesCreationNetworkDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVSeriesCreationNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createSeriesWithTitle:(id)arg1 description:(id)arg2 composerSessionId:(id)arg3;
- (id)initWithUserSession:(id)arg1;

@end

