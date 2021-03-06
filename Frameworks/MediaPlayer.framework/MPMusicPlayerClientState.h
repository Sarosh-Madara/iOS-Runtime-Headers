/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPRadioStation;

@interface MPMusicPlayerClientState : NSObject {
    BOOL _allowsBackgroundVideo;
    int _backgroundPlaybackAccess;
    MPMediaItem *_firstItem;
    MPMediaPlaylist *_geniusMixPlaylist;
    BOOL _hasAudioBackgroundMode;
    MPMediaQuery *_query;
    MPRadioStation *_radioStation;
    int _repeatMode;
    BOOL _seeking;
    int _shuffleMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _videoPlaybackEnabled;
}

@property BOOL allowsBackgroundVideo;
@property int backgroundPlaybackAccess;
@property(retain) MPMediaItem * firstItem;
@property(retain) MPMediaPlaylist * geniusMixPlaylist;
@property BOOL hasAudioBackgroundMode;
@property(retain) MPMediaQuery * query;
@property(retain) MPRadioStation * radioStation;
@property int repeatMode;
@property BOOL seeking;
@property int shuffleMode;
@property BOOL useApplicationSpecificQueue;
@property BOOL videoPlaybackEnabled;

- (void).cxx_destruct;
- (BOOL)allowsBackgroundVideo;
- (int)backgroundPlaybackAccess;
- (id)firstItem;
- (id)geniusMixPlaylist;
- (BOOL)hasAudioBackgroundMode;
- (id)query;
- (id)radioStation;
- (int)repeatMode;
- (BOOL)seeking;
- (void)setAllowsBackgroundVideo:(BOOL)arg1;
- (void)setBackgroundPlaybackAccess:(int)arg1;
- (void)setFirstItem:(id)arg1;
- (void)setGeniusMixPlaylist:(id)arg1;
- (void)setHasAudioBackgroundMode:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setSeeking:(BOOL)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (int)shuffleMode;
- (BOOL)useApplicationSpecificQueue;
- (BOOL)videoPlaybackEnabled;

@end
